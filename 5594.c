void fun()
{
  int entity_4 = 47;
  char* entity_5;
  char* entity_3;
  char entity_6[47] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_6, 'Z', 47-1);
  entity_6[47-1]='';
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  strcpy(entity_3, entity_6);
}