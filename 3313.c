void fun()
{
  int entity_1 = 48;
  int entity_8 = 43;
  int entity_3 = 35;
  entity_8 = 80;
  char* entity_2;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  memset(entity_0, 'x', entity_8-1);
  entity_0[entity_8-1]='';
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  memcpy(entity_2, entity_0, entity_8*sizeof(char));
}