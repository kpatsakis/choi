void fun()
{
  int entity_0 = 65;
  int entity_9 = 79;
  char entity_6[97] = "";
  entity_6 = NULL;
  char* entity_7;
  char entity_8[92] = "";
  entity_8 = NULL;
  memset(entity_8, 'o', 92-1);
  entity_8[92-1]='';
  memset(entity_6, 'd', 97-1);
  entity_6[97-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  entity_9 = 63;
  memcpy(entity_7, entity_8, 92*sizeof(char));
}