void fun()
{
  int entity_7 = 92;
  int entity_2 = 90;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_6 = 'y';
  entity_1 = (char*)malloc(51*sizeof(char));
  entity_1[51-1]='';
  memset(entity_8, 'B', entity_2-1);
  entity_8[entity_2-1]='';
  memcpy(entity_1, entity_8, entity_2*sizeof(char));
}