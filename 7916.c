void fun()
{
  int entity_3 = 46;
  char* entity_6;
  char entity_2[91] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'o', 91-1);
  entity_2[91-1]='';
  entity_1 = (char*)malloc(13*sizeof(char));
  entity_1[13-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  memcpy(entity_6, entity_2, 91*sizeof(char));
}