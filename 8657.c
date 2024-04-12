void fun()
{
  char entity_8[29] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(2*sizeof(char));
  entity_2[2-1]='';
  memset(entity_8, 'E', 29-1);
  entity_8[29-1]='';
  memcpy(entity_2, entity_8, 29*sizeof(char));
}