void fun()
{
  int entity_2 = 69;
  entity_2 = 85;
  char* entity_8;
  char* entity_1;
  char entity_6[5] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[1-1]='';
  memset(entity_6, 'X', 5-1);
  entity_6[5-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  strcpy(entity_8, entity_6);
}