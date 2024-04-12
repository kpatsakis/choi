void fun()
{
  int entity_7 = 19;
  char entity_6[25] = "";
  entity_6 = NULL;
  char* entity_1;
  memset(entity_6, 'A', 25-1);
  entity_6[25-1]='';
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[95-1]='';
  strcpy(entity_1, entity_6);
}