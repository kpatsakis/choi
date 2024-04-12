void fun()
{
  int entity_8 = 58;
  char entity_9[100] = "";
  entity_9 = NULL;
  char entity_3 = 'h';
  char* entity_1;
  char* entity_5;
  memset(entity_9, 'h', 100-1);
  entity_9[100-1]='';
  entity_5 = (char*)malloc(44*sizeof(char));
  entity_5[44-1]='';
  entity_1 = (char*)malloc(13*sizeof(char));
  entity_1[13-1]='';
  entity_9[entity_8] = 'e';
}