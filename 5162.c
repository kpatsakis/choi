void fun()
{
  char* entity_3;
  char entity_2[67] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[55-1]='';
  memset(entity_2, 't', 67-1);
  entity_2[67-1]='';
  memcpy(entity_3, entity_2, 67*sizeof(char));
}