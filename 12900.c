void fun()
{
  int entity_6 = 83;
  int entity_3 = 94;
  char* entity_9;
  char entity_8[93] = "";
  memset(entity_8, 'd', 93-1);
  entity_8[93-1]='0';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_8, 93*sizeof(char));
}