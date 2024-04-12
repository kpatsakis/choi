void fun()
{
  char* entity_2;
  char entity_0[40] = "";
  entity_0 = NULL;
  memset(entity_0, 'R', 40-1);
  entity_0[40-1]='';
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  memcpy(entity_2, entity_0, 40*sizeof(char));
}