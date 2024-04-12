void fun()
{
  char* entity_6;
  char entity_1[60] = "";
  entity_1 = NULL;
  char entity_0[92] = "";
  entity_0 = NULL;
  memset(entity_0, 'y', 92-1);
  entity_0[92-1]='';
  memset(entity_1, 'Q', 60-1);
  entity_1[60-1]='';
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[21-1]='';
  memcpy(entity_6, entity_1, 60*sizeof(char));
}