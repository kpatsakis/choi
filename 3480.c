void fun()
{
  char entity_2[86] = "";
  entity_2 = NULL;
  char* entity_1;
  char* entity_4;
  memset(entity_2, 'z', 86-1);
  entity_2[86-1]='';
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[29-1]='';
  entity_1 = (char*)malloc(95*sizeof(char));
  entity_1[95-1]='';
  memcpy(entity_4, entity_2, 86*sizeof(char));
}