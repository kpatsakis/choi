void fun()
{
  int entity_4 = 50;
  int entity_5 = 5;
  char* entity_8;
  char* entity_0;
  char entity_3[7] = "";
  entity_3 = NULL;
  memset(entity_3, 'M', 7-1);
  entity_3[7-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  entity_0 = (char*)malloc(42*sizeof(char));
  entity_0[42-1]='';
  entity_4 = 69;
  memcpy(entity_8, entity_3, 7*sizeof(char));
}