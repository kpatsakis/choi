void fun()
{
  char entity_3[29] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'm', 29-1);
  entity_3[29-1]='';
  entity_9 = (char*)malloc(65*sizeof(char));
  entity_9[65-1]='';
  memcpy(entity_9, entity_3, 29*sizeof(char));
}