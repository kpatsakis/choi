void fun()
{
  int entity_2 = 43;
  int entity_6 = 60;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char entity_8[91] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'O', 91-1);
  entity_8[91-1]='';
  memset(entity_3, 'J', entity_2-1);
  entity_3[entity_2-1]='';
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[83-1]='';
  entity_2 = 62;
  memcpy(entity_1, entity_3, entity_2*sizeof(char));
}