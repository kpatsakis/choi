void fun()
{
  char* entity_4;
  char entity_3[82] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[35-1]='';
  memset(entity_3, 'M', 82-1);
  entity_3[82-1]='';
  memcpy(entity_4, entity_3, 82*sizeof(char));
}