void fun()
{
  char entity_4[99] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'm', 99-1);
  entity_4[99-1]='';
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  memcpy(entity_1, entity_4, 99*sizeof(char));
}