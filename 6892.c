void fun()
{
  int entity_2 = 22;
  char* entity_3;
  char entity_7[36] = "";
  entity_7 = NULL;
  memset(entity_7, 'Q', 36-1);
  entity_7[36-1]='';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  entity_2 = 69;
  entity_7[entity_2] = 'Y';
}