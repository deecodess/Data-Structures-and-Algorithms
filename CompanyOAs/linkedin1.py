def getUnexpiredTokens(time_to_live, queries):
    token_dict = {}  # Dictionary to store token information
    result = []  # List to store results for type-3 queries
    
    for query in queries:
        tokens = query.split()  # Split the query into words
        
        if tokens[0] == "generate":
            token_id = tokens[1]
            current_time = int(tokens[2])
            expiration_time = current_time + time_to_live
            
            # Store or update token information
            token_dict[token_id] = expiration_time
        
        elif tokens[0] == "renew":
            token_id = tokens[1]
            current_time = int(tokens[2])
            
            # Check if the token exists and is unexpired
            if token_id in token_dict and token_dict[token_id] > current_time:
                # Renew the token by extending its expiration time
                token_dict[token_id] = current_time + time_to_live
        
        elif tokens[0] == "count":
            current_time = int(tokens[1])
            
            # Count unexpired tokens
            count = sum(1 for exp_time in token_dict.values() if exp_time > current_time)
            result.append(count)
    
    return result

# Example usage:
time_to_live = 35
queries = ["generate aaa 1", "renew aaa 2", "count 6", "generate bbb 7", "renew aaa 8", "renew bbb 10", "count 15"]
output = getUnexpiredTokens(time_to_live, queries)
print(output)  # Output: [1, 0]