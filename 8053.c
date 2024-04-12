void fun()
{
  char* entity_7;
  char entity_6 = 'y';
  char entity_8[36] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(93*sizeof(char));
  entity_7[93-1]='';
  memset(entity_8, 'e', 36-1);
  entity_8[36-1]='';
  memcpy(entity_7, entity_8, 36*sizeof(char));
}