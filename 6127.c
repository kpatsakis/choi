void fun()
{
  char entity_1 = 'N';
  char* entity_5;
  char entity_0[40] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  memset(entity_0, 'O', 40-1);
  entity_0[40-1]='';
  memcpy(entity_5, entity_0, 40*sizeof(char));
}