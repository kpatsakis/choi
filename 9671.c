void fun()
{
  char* entity_1;
  char entity_3[52] = "";
  entity_3 = NULL;
  memset(entity_3, 'b', 52-1);
  entity_3[52-1]='';
  entity_1 = (char*)malloc(29*sizeof(char));
  entity_1[29-1]='';
  strcpy(entity_1, entity_3);
}