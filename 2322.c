void fun()
{
  char* entity_5;
  char entity_4[82] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[11-1]='';
  memset(entity_4, 'N', 82-1);
  entity_4[82-1]='';
  memcpy(entity_5, entity_4, 82*sizeof(char));
}