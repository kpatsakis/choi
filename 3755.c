void fun()
{
  int entity_0 = 39;
  int entity_7 = 28;
  char* entity_1;
  char entity_8[63] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_8, 'e', 63-1);
  entity_8[63-1]='';
  entity_7 = 50;
  memcpy(entity_1, entity_8, 63*sizeof(char));
}