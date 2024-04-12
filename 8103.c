void fun()
{
  char entity_7[77] = "";
  entity_7 = NULL;
  char entity_1[12] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(13*sizeof(char));
  entity_3[13-1]='';
  memset(entity_1, 'l', 12-1);
  entity_1[12-1]='';
  memset(entity_7, 'd', 77-1);
  entity_7[77-1]='';
  memcpy(entity_3, entity_1, 12*sizeof(char));
}