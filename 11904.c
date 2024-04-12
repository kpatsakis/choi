void fun()
{
  char* entity_2;
  char entity_1[29] = "";
  entity_2 = (char*)malloc(100*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'U', 29-1);
  entity_1[29-1]='0';
  memcpy(entity_2, entity_1, 29*sizeof(char));
}