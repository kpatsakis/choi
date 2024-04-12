void fun()
{
  int entity_2 = 53;
  char* entity_3;
  char entity_7[85] = "";
  entity_7 = NULL;
  char entity_4 = 'H';
  memset(entity_7, 's', 85-1);
  entity_7[85-1]='';
  entity_3 = (char*)malloc(7*sizeof(char));
  entity_3[7-1]='';
  strcpy(entity_3, entity_7);
}