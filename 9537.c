void fun()
{
  char* entity_2;
  char entity_3[32] = "";
  entity_3 = NULL;
  memset(entity_3, 'p', 32-1);
  entity_3[32-1]='';
  entity_2 = (char*)malloc(29*sizeof(char));
  entity_2[29-1]='';
  memcpy(entity_2, entity_3, 32*sizeof(char));
}