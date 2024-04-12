void fun()
{
  char* entity_6;
  char entity_5[51] = "";
  entity_5 = NULL;
  char entity_1 = 'T';
  memset(entity_5, 'd', 51-1);
  entity_5[51-1]='';
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[70-1]='';
  memcpy(entity_6, entity_5, 51*sizeof(char));
}