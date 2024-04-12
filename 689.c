void fun()
{
  char* entity_9;
  char entity_6[40] = "";
  entity_6 = NULL;
  memset(entity_6, 'o', 40-1);
  entity_6[40-1]='';
  entity_9 = (char*)malloc(35*sizeof(char));
  entity_9[35-1]='';
  memcpy(entity_9, entity_6, 40*sizeof(char));
}