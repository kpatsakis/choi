void fun()
{
  char* entity_6;
  char entity_2[13] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(53*sizeof(char));
  entity_6[53-1]='';
  memset(entity_2, 't', 13-1);
  entity_2[13-1]='';
  memcpy(entity_6, entity_2, 13*sizeof(char));
}