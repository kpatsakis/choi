void fun()
{
  char entity_3[50] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(26*sizeof(char));
  entity_6[26-1]='';
  memset(entity_3, 'o', 50-1);
  entity_3[50-1]='';
  memcpy(entity_6, entity_3, 50*sizeof(char));
}