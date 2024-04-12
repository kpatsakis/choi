void fun()
{
  int entity_2 = 89;
  char entity_7[18] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_7, 'G', 18-1);
  entity_7[18-1]='';
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[69-1]='';
  memcpy(entity_0, entity_7, 18*sizeof(char));
}