void fun()
{
  int entity_8 = 85;
  char entity_3 = 'q';
  char* entity_4;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'o', entity_8-1);
  entity_9[entity_8-1]='';
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[13-1]='';
  entity_8 = 12;
  entity_9[100] = 'D';
}