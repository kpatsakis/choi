void fun()
{
  int entity_6 = 67;
  int entity_2 = 20;
  int entity_0 = 69;
  entity_0 = 79;
  char* entity_4;
  char entity_3[26] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', 26-1);
  entity_3[26-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memcpy(entity_4, entity_3, 26*sizeof(char));
}