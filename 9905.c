void fun()
{
  int entity_7 = 97;
  char* entity_3;
  char entity_8[1] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(62*sizeof(char));
  entity_3[62-1]='';
  memset(entity_8, 'T', 1-1);
  entity_8[1-1]='';
  strcpy(entity_3, entity_8);
}