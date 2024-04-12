void fun()
{
  char entity_3[50] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'M', 50-1);
  entity_3[50-1]='';
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  memcpy(entity_7, entity_3, 50*sizeof(char));
}