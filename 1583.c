void fun()
{
  char entity_0[53] = "";
  entity_0 = NULL;
  char* entity_7;
  char* entity_2;
  entity_2 = (char*)malloc(98*sizeof(char));
  entity_2[98-1]='';
  entity_7 = (char*)malloc(41*sizeof(char));
  entity_7[41-1]='';
  memset(entity_0, 'n', 53-1);
  entity_0[53-1]='';
  memcpy(entity_7, entity_0, 53*sizeof(char));
}