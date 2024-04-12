void fun()
{
  int entity_3 = 83;
  entity_3 = 2;
  char* entity_2;
  char entity_7[56] = "";
  entity_7 = NULL;
  char entity_6 = 'Q';
  memset(entity_7, 'S', 56-1);
  entity_7[56-1]='';
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[94-1]='';
  entity_7[entity_3] = 'l';
}