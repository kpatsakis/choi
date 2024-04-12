void fun()
{
  char* entity_7;
  char entity_1[36] = "";
  entity_1 = NULL;
  memset(entity_1, 'j', 36-1);
  entity_1[36-1]='';
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  memcpy(entity_7, entity_1, 36*sizeof(char));
}