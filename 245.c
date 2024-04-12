void fun()
{
  int entity_8 = 25;
  char* entity_6;
  char entity_9 = 't';
  char* entity_3;
  char entity_2[82] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[54-1]='';
  memset(entity_2, 'M', 82-1);
  entity_2[82-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memcpy(entity_3, entity_2, 82*sizeof(char));
}