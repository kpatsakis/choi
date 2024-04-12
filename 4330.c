void fun()
{
  int entity_0 = 1;
  char* entity_4;
  char entity_7[56] = "";
  entity_7 = NULL;
  memset(entity_7, 'Z', 56-1);
  entity_7[56-1]='';
  entity_4 = (char*)malloc(56*sizeof(char));
  entity_4[56-1]='';
  memcpy(entity_4, entity_7, 56*sizeof(char));
}