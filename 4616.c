void fun()
{
  char entity_4[74] = "";
  entity_4 = NULL;
  char entity_5 = 'u';
  char* entity_2;
  memset(entity_4, 'o', 74-1);
  entity_4[74-1]='';
  entity_2 = (char*)malloc(28*sizeof(char));
  entity_2[28-1]='';
  memcpy(entity_2, entity_4, 74*sizeof(char));
}