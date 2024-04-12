void fun()
{
  char* entity_5;
  char entity_2 = 'Z';
  char entity_7 = 'J';
  char entity_1[19] = "";
  entity_1 = NULL;
  memset(entity_1, 'z', 19-1);
  entity_1[19-1]='';
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[83-1]='';
  memcpy(entity_5, entity_1, 19*sizeof(char));
}