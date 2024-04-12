void fun()
{
  char entity_5 = 'I';
  char entity_3 = 'f';
  char* entity_0;
  char entity_2[84] = "";
  entity_2 = NULL;
  memset(entity_2, 'J', 84-1);
  entity_2[84-1]='';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  memcpy(entity_0, entity_2, 84*sizeof(char));
}