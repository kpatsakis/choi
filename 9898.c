void fun()
{
  int entity_2 = 7;
  char* entity_3;
  char entity_7[34] = "";
  entity_7 = NULL;
  memset(entity_7, 'F', 34-1);
  entity_7[34-1]='';
  entity_3 = (char*)malloc(6*sizeof(char));
  entity_3[6-1]='';
  strcpy(entity_3, entity_7);
}