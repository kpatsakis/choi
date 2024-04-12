void fun()
{
  int entity_8 = 30;
  entity_8 = 59;
  char* entity_4;
  char entity_7[67] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_4 = (char*)malloc(10*sizeof(char));
  entity_4[10-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_7, 'e', 67-1);
  entity_7[67-1]='';
  memcpy(entity_0, entity_7, 67*sizeof(char));
}