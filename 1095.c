void fun()
{
  int entity_5 = 58;
  entity_5 = 37;
  char entity_2 = 'Z';
  char entity_8[56] = "";
  entity_8 = NULL;
  char* entity_1;
  memset(entity_8, 'O', 56-1);
  entity_8[56-1]='';
  entity_1 = (char*)malloc(23*sizeof(char));
  entity_1[23-1]='';
  entity_8[entity_5] = 'y';
}