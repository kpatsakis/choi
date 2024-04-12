void fun()
{
  char entity_5 = 'y';
  char* entity_8;
  char entity_6[82] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  memset(entity_6, 'd', 82-1);
  entity_6[82-1]='';
  strcpy(entity_8, entity_6);
}