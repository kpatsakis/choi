void fun()
{
  char entity_9[30] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[68-1]='';
  memset(entity_9, 'j', 30-1);
  entity_9[30-1]='';
  entity_9[54] = 'a';
}