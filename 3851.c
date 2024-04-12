void fun()
{
  int entity_4 = 52;
  char entity_7[9] = "";
  entity_7 = NULL;
  char entity_5[82] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_7, 'h', 9-1);
  entity_7[9-1]='';
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[76-1]='';
  memset(entity_5, 'o', 82-1);
  entity_5[82-1]='';
  strcpy(entity_8, entity_5);
}